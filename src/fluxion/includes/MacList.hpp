/*$6*/


#ifndef MacList_h
#define MacList_h
#define listLen 64

#include "Mac.hpp"

class MacList {
	public:
		MacList();
		int   add ( Mac adr );
		void  remove ( Mac adr );
		void  set ( int num, Mac adr );
		void  info();
		bool  contains ( Mac adr );
		Mac   _get ( int i );
		void  _clear();
		
		int   getNum ( Mac adr );
		int   num = 0;
		Mac   macAdrs[listLen];
	private:
		int   len = listLen;
		void  addPacket ( Mac adr );
};
#endif
