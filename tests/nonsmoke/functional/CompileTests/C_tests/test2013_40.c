#if 0
// This is the larger example...
static const int __attribute__ ((aligned (16))) dither[8][8] = {
    {0x00,0x60,0x18,0x78,0x06,0x66,0x1E,0x7E},
    {0x40,0x20,0x58,0x38,0x46,0x26,0x5E,0x3E},
    {0x10,0x70,0x08,0x68,0x16,0x76,0x0E,0x6E},
    {0x50,0x30,0x48,0x28,0x56,0x36,0x4E,0x2E},
    {0x04,0x64,0x1C,0x7C,0x02,0x62,0x1A,0x7A},
    {0x44,0x24,0x5C,0x3C,0x42,0x22,0x5A,0x3A},
    {0x14,0x74,0x0C,0x6C,0x12,0x72,0x0A,0x6A},
    {0x54,0x34,0x4C,0x2C,0x52,0x32,0x4A,0x2A},
};
#endif

// This is the smaller example where the attribute is unparsed in the wrong location.
// The error is that it is unparsed as: static const int var[2] = {(0x00), (0x60)} __attribute__((align(16)));
static const int __attribute__ ((aligned (16))) var[2] = {0x00,0x60};
