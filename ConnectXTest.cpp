/**
 * Unit Tests for ConnectX class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "ConnectX.h"
 
class ConnectXTest : public ::testing::Test
{
	protected:
		ConnectXTest(){}
		virtual ~ConnectXTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(ConnectXTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(ConnectXTest, Demo)
{
    ConnectX obj_x;
    obj_x.showBoard();
}


TEST(ConnectXTest, Empty)
{
    ConnectX obj_con;
    ASSERT_EQ(0, obj_con.at(1,4));
}

TEST(ConnectXTest, inboundtest)
{
    ConnectX obj_con;
    obj_con.placePiece(4);
    obj_con.showBoard();
    ASSERT_EQ(0, obj_con.at(1,4));
}


TEST(ConnectXTest, OutBounds)
{
    ConnectX obj_con;
    ASSERT_EQ(-1, obj_con.at(11,11));
}

TEST(ConnectXTest, OutWidth)
{
    ConnectX obj_con;
    ASSERT_EQ(-1, obj_con.at(-2,4));
}

TEST(ConnectXTest, Outheight)
{
    ConnectX obj_con;
    ASSERT_EQ(-1, obj_con.at(1,-4));
}

TEST(ConnectXTest, inHeight)
{
    ConnectX obj_con;
    ASSERT_EQ(0, obj_con.at(2,4));
}
TEST(ConnectXTest, inPlacePiece)
{
    ConnectX obj_con;
    obj_con.placePiece(5);    
    ASSERT_EQ(1,obj_con.whoseTurn());
}
TEST(ConnectXTest, OutPlacePiece)
{
    ConnectX obj_con;
    obj_con.placePiece(22);    
    ASSERT_EQ(1,obj_con.whoseTurn());
}


TEST(ConnectXTest, ToggleTurn)
{
    ConnectX obj_con;
    obj_con.placePiece(0);
        
    obj_con.placePiece(1);
    obj_con.placePiece(0);
    obj_con.placePiece(1);
    obj_con.placePiece(0);
    
    obj_con.placePiece(1);
    obj_con.placePiece(0);
    
    obj_con.placePiece(1);

    obj_con.placePiece(1);
    obj_con.placePiece(1);
    obj_con.placePiece(1);
    obj_con.showBoard();
    ASSERT_EQ(1,obj_con.whoseTurn());
}
TEST(ConnectXTest, PlacePiece)
{
    ConnectX obj_con;
//    obj_con.placePiece(-1);
    obj_con.showBoard();
    ASSERT_EQ(0, obj_con.at(0,0));
}

TEST(ConnectXTest,PlacePieceAtBounds)
{
    ConnectX obj_con;
    obj_con.placePiece(0);
    obj_con.showBoard();
    ASSERT_EQ(0, obj_con.at(5,0));
}

TEST(ConnectXTest, PlacePieceCoreDump)
{
    ConnectX obj_con;
//    obj_con.placePiece(-1);
    obj_con.showBoard();
    ASSERT_EQ(-1, obj_con.at(110,5));
}

TEST(ConnectXTest, PlacePie)
{
    ConnectX obj_con;
   obj_con.placePiece(22);
    obj_con.showBoard();
   // ASSERT_EQ(-1, obj_con.at(110,5));
}


TEST(ConnectXTest, ToggleTurnPlacePiece)
{
    ConnectX obj_con;
    obj_con.placePiece(0);
        
    obj_con.placePiece(0);
    obj_con.placePiece(0);
    obj_con.placePiece(0);
    obj_con.placePiece(0);
    
    obj_con.placePiece(0);
    obj_con.placePiece(0);
    
    obj_con.placePiece(0);

    obj_con.placePiece(0);
    obj_con.showBoard();
   // ASSERT_EQ(,obj_con.whoseTurn());
}

TEST(ConnectXTest, PlacePieceAt)
{
    ConnectX obj_con;
     obj_con.placePiece(12);
     ASSERT_EQ(-1,obj_con.at(12,0));
}

TEST(ConnectXTest, PlacePieceCor)
{
    ConnectX obj_con;
     obj_con.placePiece(-1);
    obj_con.showBoard();
}
