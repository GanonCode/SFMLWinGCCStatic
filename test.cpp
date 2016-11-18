#include <SFML/Graphics.hpp>

int main( int argc, char** argv )
{
	sf::RenderWindow appWindow( sf::VideoMode( 800, 600, 32 ), "App" );
	sf::Event appEvent;
	
	while ( appWindow.isOpen() )
	{
		while ( appWindow.pollEvent( appEvent ) )
		{
			if ( appEvent.type == sf::Event::Closed )
				appWindow.close();
		}
		
		appWindow.clear();
		appWindow.display();
	}
	
	return 0;
}