//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
    if (check_column_win() == true)
    {
        set_winner;
        return true;
    }

    return check_board_full();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player; 
    clear_board();
}

void TicTacToe::display_board()const
{
    for(std::size_t i=0; i < pegs.size(); i += 3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
    
}
bool TicTacToe::check_board_full()const
{
    for(auto peg: pegs)
    {
        if(peg == " ")
        {
            return false;
        }
    }

    return true;
}

bool TicTacToe::check_column_win()
{
    if (pegs[0] == pegs[3] && pegs[3] == pegs[6])
    {
        return true;
    }

    if (pegs[1] == pegs[4] && pegs[4] == pegs[7])
    {
        return true;
    }

    if (pegs[2] == pegs[5] && pegs[5] == pegs[8])
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    if (pegs[0] == pegs[1] && pegs[1] == pegs[2])
    {
        return true;
    }

    if (pegs[3] == pegs[4] && pegs[4] == pegs[5])
    {
        return true;
    }

    if (pegs[6] == pegs[7] && pegs[7] == pegs[8])
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] == pegs[4] && pegs[8] == pegs[6])
    {
        return true;
    }

    if (pegs[2] == pegs[4] && pegs[4] == pegs[6])
    {
        return true;
    }

    return false;
}


void TicTacToe::clear_board()
{ 
    for(std::size_t i=0; i <pegs.size(); ++i)
    {
        pegs[i] = " ";
    }
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
     
    return true;
}

