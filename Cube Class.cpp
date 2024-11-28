#include <iostream>

class cube {
   private:
      float size;
      float calcArea(void){
         return size * size * size;
      }
      float calcSArea(void){
         return size * size * 6;
      }
   public:
      cube(){
         size = 0;
      }
      void setSize(float s){
         size = s;
      }
      float getArea(void){
         return (calcArea());
      }
      float getSArea(void){
         return (calcSArea());
      }
};

int main(){
   cube TestCube;
   TestCube.setSize(5.6);
   return 0;
}
