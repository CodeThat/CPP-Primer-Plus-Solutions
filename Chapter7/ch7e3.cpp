#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void showValue(box);
void setVolume(box*);

int main()
{
    box toyBox = {"Elf", 2.5, 3.3, 5.0, 0};
    showValue(toyBox);
    setVolume(&toyBox);
    cout << "\n\nWith volume calculated: \n";
    showValue(toyBox);

    return 0;
}

void showValue(box ourStruct)
{
    cout << "Struct details\n";
    cout << "Struct maker: " << ourStruct.maker << endl;
    cout << "Struct height: " << ourStruct.height << endl;
    cout << "Struct width: " << ourStruct.width << endl;
    cout << "Struct length: " << ourStruct.length << endl;
    cout << "Struct volume: " << ourStruct.volume << endl;
}

void setVolume(box* ourStruct)
{
    ourStruct->volume = ourStruct->height * ourStruct->width * ourStruct->length;
}
