#include<stdio.h>
int main()
{
    float v=10,a=2,t=20,x,y,z;
    x=v+a*t;
    y=v*t+a*t*t/2;
    z=y/t;
    printf("已知匀加速运动的初速度为10m/s,加速度为2m/s^2,则20s以后的速度为%.1fm/s,20s内走过的路程为%.1fm,平均速度为%.1fm/s。",x,y,z);
}