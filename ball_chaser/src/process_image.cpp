#include "ros/ros.h"
#include "ball_chaser/DriveToTarget.h"
#include <sensor_msgs/Image.h>

ros::Publisher pub;
ros::ServiceClient client;

void process_image_callback(const sensor_msgs::Image img)
{
ball_chaser::DriveToTarget srv;
//std::cout<<img.height<<img.width<<img.step<<std::endl;
for(int i=0;i<img.height*img.step;i+=3)
{
if(img.data[i]+img.data[i+1]+img.data[i+2]==255*3)
    {
	if((i%img.step)<(img.step/3))
	{
	srv.request.linear_x = 0;
	srv.request.angular_z = 0.01;
	}
	else{
        if((i%img.step)>=(2*img.step/3))
	{
	srv.request.linear_x = 0;
	srv.request.angular_z = -0.01;
	}
	else
	{
	srv.request.linear_x = 0.1 ;
	srv.request.angular_z = 0;
	}
           }
	break;
   }
else{
srv.request.linear_x = 0;
srv.request.angular_z = 0;
}

}

if(!client.call(srv)) ROS_ERROR("Failed to call service /ball_chaser/command_robot");

}

int main(int argc,char** argv)

{
ros::init(argc,argv,"process_image");
ros::NodeHandle n;

client = n.serviceClient<ball_chaser::DriveToTarget>("/ball_chaser/command_robot");

ros::Subscriber sub1 = n.subscribe("/camera/rgb/image_raw",1,process_image_callback);

ros::spin();
 
return 0;

}
