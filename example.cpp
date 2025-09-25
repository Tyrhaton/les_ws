#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float32.hpp"

using namespace std::chrono_literals;

class UltrasonicNode : public rclcpp::Node
{
public:
    UltrasonicNode() : Node("ultrasonic_node")
    {
        pub_ = create_publisher<std_msgs::msg::Float32>("ultrasonic/distance", 10);
        timer_ = create_wall_timer(500ms, [this]()
                                   { publish_distance(); });
    }

private:
    void publish_distance()
    {
        float distance = read_sensor();
        auto msg = std_msgs::msg::Float32();
        msg.data = distance;
        pub_->publish(msg);
        RCLCPP_INFO(get_logger(), "Distance: %.2f cm", distance);
    }

    float read_sensor()
    {
        digitalWrite(trigPin, LOW);
        delayMicroseconds(2);
        digitalWrite(trigPin, HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin, LOW);

        int duration = pulseIn(echoPin, HIGH, 30000);

        if (duration == 0)
            return -1;
        return duration * 0.034 / 2;

        rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr pub_;
        rclcpp::TimerBase::SharedPtr timer_;
    };

    int main(int argc, char **argv)
    {
        rclcpp::init(argc, argv);
        rclcpp::spin(std::make_shared<UltrasonicNode>());
        rclcpp::shutdown();
    }
}