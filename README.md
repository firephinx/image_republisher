# image_republisher

This ros package is used for republishing an image topic locally.

## Configuration Instructions
1. Modify the topic name parameters in the launch/image_republisher_node.launch file to your liking.
2. If you would like the republished images to have a different frame_id, change the output_image_frame_id_name parameter in the launch file.

## Usage Instructions
1. First build the ros package using `catkin_make` in your catkin workspace.
2. Source your `devel/setup.bash` in your catkin workspace.
3. Start the image_republisher node with the command `roslaunch image_republisher image_republisher_node.launch`.