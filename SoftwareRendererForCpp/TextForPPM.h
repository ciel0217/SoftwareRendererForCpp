#include <fstream>
#include <string>

class TextForPPM
{
private:
    std::ofstream m_WritingFile;
    const std::string FILE_NAME = "result.ppm";
public:
	TextForPPM() = delete;
    TextForPPM(int height, int width){SetUp(height, width);}
    virtual ~TextForPPM(){Close();}

    void SetUp(int height, int width);
    void OutputText(int r, int g, int b);
    void Close();
};