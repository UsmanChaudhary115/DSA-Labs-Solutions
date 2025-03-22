#ifndef MUSIC_PLAYER_H
#define MUSIC_PLAYER_H
#include"Double_List.h"
#include"Song.h"
class MusicPlayer
{
	Double_List<Song> playlist;
	Node<Song>* currentSongNode;
public:
	MusicPlayer() :playlist(), currentSongNode(nullptr)
	{}
	void addSongToPlaylist(const Song& ref)
	{
		if (playlist.isEmpty())
		{
			playlist.addToHead(ref);
			currentSongNode = playlist.getHead();
		}
		else
		{
			playlist.addToTail(ref);
		}
	}
	void removeSongFromPlaylist(int songID)
	{
		Song ref{ songID }; 
		playlist.deleteNode(ref);
	}
	void playPlaylist()
	{
		if (playlist.isEmpty())
		{
			cout << "Play List is Empty!" << endl;
		}
		else
		{
			while (currentSongNode)
			{
				cout << currentSongNode->getData() << endl;
				currentSongNode = currentSongNode->getNext();
				cout << endl;
			}
			currentSongNode = playlist.getHead();
		}
	}
	void moveForward()
	{
		if (playlist.isEmpty())
		{
			cout << "Play List is Empty!" << endl;
		}
		else if(currentSongNode->getNext() == nullptr && playlist.getHead() == playlist.getTail())
		{
			cout << "Sorry! There is only One Song present in the playlist." << endl;
		}
		else if (currentSongNode->getData() == playlist.getTail()->getData())
		{
			currentSongNode = playlist.getHead();
		}
		else
		{
			currentSongNode = currentSongNode->getNext();
		}
	}
	void moveBackward()
	{
		if (playlist.isEmpty())
		{
			cout << "Play List is Empty!" << endl;
		}
		else if (currentSongNode->getPrevious() == nullptr && playlist.getHead() == playlist.getTail())
		{
			cout << "Sorry! There is only One Song present in the playlist." << endl;
		}
		else if (currentSongNode->getData() == playlist.getHead()->getData())
		{
			currentSongNode = playlist.getTail();
		}
		else
		{
			currentSongNode = currentSongNode->getPrevious();
		}
	}
	void displayPlaylist()
	{
		if (playlist.isEmpty())
		{
			cout << "Play List is Empty!" << endl;
		}
		else
		{
			for (Node<Song>* temp = playlist.getHead(); temp != nullptr; temp = temp->getNext())
			{
				cout << temp->getData() << endl; 
				cout << endl;
			}
		}
	}
	void displayCurrentSong()
	{
		if (playlist.isEmpty())
		{
			cout << "Play List is Empty!" << endl;
		}
		else
		{
			cout << currentSongNode->getData() << endl; 
			cout << endl;
		}
	}

};
#endif // !MUSIC_PLAYER_H
