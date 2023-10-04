int evaluate_position(char board[8][8])
{
    int white = 0, black = 0;

    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++) {
            switch (board[i][j]) {
                // White pieces
                case 'Q': white += 9; break;
                case 'R': white += 5; break;
                case 'B': case 'N': white += 3; break;
                case 'P': white += 1; break;

                // Black pieces
                case 'q': black += 9; break;
                case 'r': black += 5; break;
                case 'b': case 'n': black += 3; break;
                case 'p': black += 1; break;
                
                default: break;
            }
        }
    }    

    return white - black;
}