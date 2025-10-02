# Les Workstation

## Commands

```shell

ros2 run robot_state_publisher robot_state_publisher --ros-args -p robot_description:="$(xacro /home/tyrhaton/Projects/les_ws/src/robot_description/urdf/skyentific_robot.urdf.xacro)"

ros2 run controller_manager ros2_control_node --ros-args --params-file /home/tyrhaton/Projects/les_ws/src/robot_bringup/config/skyentific_robot_controllers.yaml

ros2 run controller_manager spawner joint_state_broadcaster

ros2 run controller_manager spawner arm_controller

ros2 run controller_manager spawner gripper_controller

ros2 launch robot_moveit_config move_group.launch.py

ros2 run rviz2 rviz2 -d /home/tyrhaton/Projects/les_ws/src/robot_description/rviz/urdf_config.rviz

rqt_graph
```
