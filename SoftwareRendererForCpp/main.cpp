#include "TextForPPM.h"

#define IMAGE_HEIGHT 64
#define IMAGE_WIDTH 64

int main()
{
    TextForPPM outputTextForPPM(IMAGE_HEIGHT, IMAGE_WIDTH);

    for (int j = IMAGE_HEIGHT-1; j >= 0; --j) {
        for (int i = 0; i < IMAGE_WIDTH; ++i) 
        {
            auto r = double(i) / (IMAGE_WIDTH-1);
            auto g = double(j) / (IMAGE_HEIGHT-1);
            auto b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            outputTextForPPM.OutputText(ir, ig, ib);
        }
        
    }
    

    return 0;
}