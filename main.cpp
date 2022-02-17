#include <cstdio>
#include <embree3/rtcore.h>
#include <embree3/rtcore_ray.h>
#include <tbb/parallel_for.h>

int main (int argc, char*argv[])
{ 
  RTCDevice device = rtcNewDevice(0);
  tbb::parallel_for( tbb::blocked_range<int>(0,128),
                       [&](tbb::blocked_range<int> r)
    {
        for (int i=r.begin(); i<r.end(); ++i)
        {
            puts("test");
        }
    });
  puts("test");
}
