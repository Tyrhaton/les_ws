/*
--Node description:
...what the node is doing (functionally)...

*/

/*
--Software changes:
one line per change
(1) created DD.MM.YYYY: developer-Tycho Mallee reviewer(s)-
...
*/

//-- tester:

//--general includes
#include <cstdlib>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/clock.hpp"
#include "rclcpp/time.hpp"

//--custom includes

//--using

//--Node class

class Clock : public rclcpp::Node
{
public:
    //-- constuctor:
    Clock() : Node("clock_node")
    {
        //--communication and timer objects:
        // see templates for subcribers, action server ...

        //--customs functions:
        print_time();
    }

    //-- communication and timer functions

    //--customs functions:
    void print_time()
    {

        my_time_ = my_clock_.now();
        RCLCPP_INFO(this->get_logger(), "Current time: %f", my_time_.seconds());
    }

    //--custom variables:

private:
    //--rclcpp variables:

    //--custom variables:

    rclcpp::Time my_time_;
    rclcpp::Clock my_clock_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<Clock>();

    rclcpp::spin(node);

    rclcpp::shutdown();

    return 0;
}