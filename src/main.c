#include <string.h>
#include <stdbool.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <driver/gpio.h>

typedef struct {
    // float temperature;
    int number;
    float fnum;
    char arr[];
} packet;

packet my_packet ={
    .number = 10,
    .fnum = 16.5,
    .arr = "Hello"
};

void app_main() {
    vTaskDelay(2000/ portTICK_PERIOD_MS);
    printf("int number is %d\n", my_packet.number);
    printf("float number is %.2f\n", my_packet.fnum);
    printf("arr is %s\n", my_packet.arr);
}