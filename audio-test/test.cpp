#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main(int argc, char** argv)
{
  sf::RenderWindow appWindow(sf::VideoMode(800, 600, 32), "App");
  sf::Event appEvent;
  
  const char* filePath = "Enter a valid .WAV file path here or the program will close itself at line 14";
  
  sf::Music music;
  if(!music.openFromFile(filePath))
  {
    return -1;
  }
  
  while (appWindow.isOpen())
  {
    while (appWindow.pollEvent(appEvent))
    {
      if (appEvent.type == sf::Event::Closed)
        appWindow.close();
      if (appEvent.type == sf::Event::KeyPressed)
      {
        if (appEvent.key.code == sf::Keyboard::Escape)
        {
          appWindow.close();
        }
        if (appEvent.key.code == sf::Keyboard::M)
        {
          music.play();
        }
      }
    }
    
    appWindow.clear();
    appWindow.display();
  }
  
  return 0;
}