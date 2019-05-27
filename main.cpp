#include <iostream>
#include "bitbuffer.h"
using namespace std;

int main()
{
    uint8_t buffer[512] = {0};

    rtc::BitBuffer reader(buffer,512);
    rtc::BitBufferWriter writer(buffer,512);

    writer.WriteUInt8(3);
    writer.WriteUInt32(59);

    uint8_t v8;
    uint32_t v32;
    reader.ReadUInt8(&v8);
    reader.ReadUInt32(&v32);

    cout << v8 << endl;
    cout << v32 << endl;
    return 0;
}
