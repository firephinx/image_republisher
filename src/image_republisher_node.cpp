#include <ros/ros.h>
#include "image_republisher/image_republisher.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "image_republisher_node", ros::init_options::AnonymousName);

  ImageRepublisher ir;

  ros::spin();

  return 0;
}
