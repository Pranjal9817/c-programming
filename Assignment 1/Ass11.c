//. Consider a room having one door and two windows both of the same size. 
//Accept dimensions of the room, door and window. Print the area to be painted 
//(interior walls) and area to be whitewashed (roof). 

#include <stdio.h>

int main() {
    float length, width, height;
    float door_w, door_h;
    float win_w, win_h;

    float wall_area, door_area, window_area, paint_area, roof_area;

    printf("Enter room length, width and height: ");
    scanf("%f %f %f", &length, &width, &height);

    printf("Enter door width and height: ");
    scanf("%f %f", &door_w, &door_h);

    printf("Enter window width and height: ");
    scanf("%f %f", &win_w, &win_h);

    wall_area = 2 * (length * height) + 2 * (width * height);
    door_area = door_w * door_h;
    window_area = 2 * (win_w * win_h);
    paint_area = wall_area - door_area - window_area;
    roof_area = length * width;

    printf("Area to be painted: %.2f\n", paint_area);
    printf("Area to be whitewashed (roof): %.2f\n", roof_area);

    return 0;
}
