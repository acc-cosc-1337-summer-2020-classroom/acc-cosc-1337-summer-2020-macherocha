#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify game ends when the winner is C")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Verify first player")
{
	TicTacToe tic_tac_toe;
	REQUIRE(tic_tac_toe.start_game("X")

	
}

TEST_CASE("Verify first column win")
{
	TicTacToe tic_tac_toe;
	REQUIRE tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(7);

	REQUIRE(tic_tac_toe.game_over() == true);

}

TEST_CASE("Verify second column win")
{
	TicTacToe tic_tac_toe;
	REQUIRE tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe..mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe..mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe..mark_board(8);
	
	REQUIRE(tic_tac_toe.game_over() == true);

}

TEST_CASE("Verify third column win")
{
	TicTacToe tic_tac_toe;
	REQUIRE tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe..mark_board(9);
	
	REQUIRE(tic_tac_toe.game_over() == true);

}

TEST_CASE("Verify first row win")
{
	TicTacToe tic_tac_toe;
	REQUIRE tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(3);
	
	REQUIRE(tic_tac_toe.game_over() == true);

}

TEST_CASE("Verify second row win")
{
	TicTacToe tic_tac_toe;
	REQUIRE tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(6);
	
	REQUIRE(tic_tac_toe.game_over() == true);

}

TEST_CASE("Verify third row win")
{
	TicTacToe tic_tac_toe;
	REQUIRE tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(8);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(9);
	
	REQUIRE(tic_tac_toe.game_over() == true);

}

TEST_CASE("Verify first row win")
{
	TicTacToe tic_tac_toe;
	REQUIRE tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(9);
	
	REQUIRE(tic_tac_toe.game_over() == true);

}

TEST_CASE("Verify first row win")
{
	TicTacToe tic_tac_toe;
	REQUIRE tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.first_player(3);
	
	REQUIRE(tic_tac_toe.game_over() == true);

}