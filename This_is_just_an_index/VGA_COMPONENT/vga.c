#include<stdio.h>
#include"VGA.h"

void VGA_addicquo(float *frameBuffer,int stack){
    //initial block of operation
    int h_sync = 0;
    int v_sync = 0;
    
    //loop operation
    for(h_sync = 0; h_sync < 640; h_sync++){
        for(v_sync = 0; v_sync < 480; v_sync++){
            prinf(frameBuffer[h_sync + 480 * v_sync]);
        }
    }
}