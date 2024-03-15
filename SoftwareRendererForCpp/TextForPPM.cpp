#include "TextForPPM.h"


void TextForPPM::SetUp(int height, int width)
{
    m_WritingFile.open(FILE_NAME, std::ios::app);
	m_WritingFile << "P3" << std::endl;
	m_WritingFile << std::to_string(width) << ' ' << std::to_string(height) << std::endl;
	m_WritingFile << "255" << std::endl;
}

void TextForPPM::OutputText(int r, int g, int b)
{
    std::string text = std::to_string(r) + ' ' + std::to_string(g) + ' ' + std::to_string(b) ;
    m_WritingFile << text << std::endl;
}

void TextForPPM::Close()
{
    m_WritingFile.close();
}
