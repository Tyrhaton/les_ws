/*
Software changes (one line by change):
(1) 31.3.2025 created by Tilmann Koster 
(2) 1.4.2025 xxx functionality added ... by Tilmann Koster
...
*/


/*
Node description: Service server that calculates the length of a vector (x, y, z).
*/ 

#include "rclcpp/rclcpp.hpp"
#include "my_interfaces/srv/template_sm.hpp"

using TemplateSm = my_interfaces::srv::TemplateSm;
using namespace std::placeholders;

class TemplateServiceServer : public rclcpp::Node
{
public:
  TemplateServiceServer() : Node("vector_length_service_node")
  {
    template_serviceserver_ = this->create_service<TemplateSm>(
      "vector_length_service",
      std::bind(&TemplateServiceServer::callBackTemplateS, this, _1, _2));
    RCLCPP_INFO(this->get_logger(), "Service Server started");
  }

  void callBackTemplateS(const TemplateSm::Request::SharedPtr request, const TemplateSm::Response::SharedPtr response)
  {
    // Calculate vector length
    double x = request->x;
    double y = request->y;
    double z = request->z;
    response->length = std::sqrt(x*x + y*y + z*z);
    RCLCPP_INFO(this->get_logger(), "Received x=%.2f y=%.2f z=%.2f, length=%.2f", x, y, z, response->length);
  }

private:
  rclcpp::Service<TemplateSm>::SharedPtr template_serviceserver_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<TemplateServiceServer>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}