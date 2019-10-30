#include <iostream>
#include <cmath>
int main(){
    float x;
    float y;
    float z;
    std::cout <<"Ingrese lados del triangulo"<<std::endl;
    std::cin>>x>>y>>z;
    if(sqrt(x*x+y*y=z*z)||sqrt(x*x+z*z=y*y)||sqrt(z*z+y*y=x*x)){
       std::cout <<"Es un triángulo rectangulo"<<std::endl; 
    }
    else{
       std::cout <<"No es un triángulo rectangulo"<<std::endl;
    return 0;
}
