#ifndef DP_FACTORY_CIRCLE_H_
#define DP_FACTORY_CIRCLE_H_

#include "shape.hpp"

class Circle : public Shape {
 public:
  void Draw() override;
};

#endif  // DP_FACTORY_CIRCLE_H_