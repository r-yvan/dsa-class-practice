#include <iostream>

class Rectangle
{
private:
  int width, height;

public:
  int area()
  {
    return width * height;
  }

  void setValues(int w, int h)
  {
    width = w;
    height = h;
  }

  Rectangle(int w, int h)
  {
    width = w;
    height = h;
  }

  Rectangle() {}
};

int main()
{
  Rectangle recta;
  recta.setValues(20, 10);
  std::cout << "Area is recta: " << recta.area() << std::endl;

  Rectangle rectb(15, 45);
  std::cout << "Area is of rectb: " << rectb.area() << std::endl;

  Rectangle * rectd = new Rectangle(50, 100);
  std::cout << "Area is of rectd: " << rectd->area() << std::endl;

  return 0;
}