import java.util.*;
class Figure_3D
{
double r,h;
Figure_3D(double r, double h) { this.r=r; this.h=h; }
double surfaceArea() { return 0; }
double volume() { return 0; }
}
class Cylinder31 extends Figure_3D
{
Cylinder31(double r, double h) { super(r, h); }
double surfaceArea() { return (2*3.14*r*h + 2*3.14*r*r); }
double volume() { return (3.14*r*r*h); }
}
class Cone31 extends Figure_3D
{
double sh;
Cone31(double r, double h) { super(r, h); sh=Math.sqrt(r*r+h*h); }
double surfaceArea() { return (3.14*r*sh + 3.14*r*r); }
double volume() { return (3.14*r*r*h/3); }
}
class Sphere31 extends Figure_3D
{
Sphere31(double r) { super(r, r); }
double surfaceArea() { return (4*3.14*r*r); }
double volume() { return (4*3.14*r*r*r/3); }
}
class Figures3d31
{
public static void main(String arg[])
{
Figure_3D fig[]=new Figure_3D[3];
fig[0]=new Cylinder31(2,5);
fig[1]=new Cone31(2.5,4);
fig[2]=new Sphere31(5);
System.out.println("Surface area of Cylinder is: "+ fig[0].surfaceArea());
System.out.println("Volume of Cylinder is: "+ fig[0].volume());
System.out.println("Surface area of Cone is: "+ fig[1].surfaceArea());
System.out.println("Volume of Cone is: "+ fig[1].volume());
System.out.println("Surface area of Sphere is: "+ fig[2].surfaceArea());
System.out.println("Volume of Sphere is: "+ fig[2].volume());
}
}