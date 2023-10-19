// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drive_bridge_msg:msg/InputValues.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__STRUCT_HPP_
#define DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__drive_bridge_msg__msg__InputValues __attribute__((deprecated))
#else
# define DEPRECATED__drive_bridge_msg__msg__InputValues __declspec(deprecated)
#endif

namespace drive_bridge_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InputValues_
{
  using Type = InputValues_<ContainerAllocator>;

  explicit InputValues_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta = 0.0;
      this->d = 0.0;
    }
  }

  explicit InputValues_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta = 0.0;
      this->d = 0.0;
    }
  }

  // field types and members
  using _delta_type =
    double;
  _delta_type delta;
  using _d_type =
    double;
  _d_type d;

  // setters for named parameter idiom
  Type & set__delta(
    const double & _arg)
  {
    this->delta = _arg;
    return *this;
  }
  Type & set__d(
    const double & _arg)
  {
    this->d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drive_bridge_msg::msg::InputValues_<ContainerAllocator> *;
  using ConstRawPtr =
    const drive_bridge_msg::msg::InputValues_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drive_bridge_msg::msg::InputValues_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drive_bridge_msg::msg::InputValues_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drive_bridge_msg::msg::InputValues_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drive_bridge_msg::msg::InputValues_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drive_bridge_msg::msg::InputValues_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drive_bridge_msg::msg::InputValues_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drive_bridge_msg::msg::InputValues_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drive_bridge_msg::msg::InputValues_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drive_bridge_msg__msg__InputValues
    std::shared_ptr<drive_bridge_msg::msg::InputValues_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drive_bridge_msg__msg__InputValues
    std::shared_ptr<drive_bridge_msg::msg::InputValues_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InputValues_ & other) const
  {
    if (this->delta != other.delta) {
      return false;
    }
    if (this->d != other.d) {
      return false;
    }
    return true;
  }
  bool operator!=(const InputValues_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InputValues_

// alias to use template instance with default allocator
using InputValues =
  drive_bridge_msg::msg::InputValues_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drive_bridge_msg

#endif  // DRIVE_BRIDGE_MSG__MSG__DETAIL__INPUT_VALUES__STRUCT_HPP_
