#include <cmath>
#include <climits>
#include <cstdio>
#include <queue>
#include <vector>
#include <map>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stack>
#include <algorithm>
#include <cstring>
#include <stdlib.h>
#include <string>

#define max(a,b) (a<b?b:a)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(x) (x)*(x)
#define loop(i,v,n) for(int i=v;i<n;i++)
#define print(i,V) for(auto &i : V) cout << i << endl;
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef vector<int> vb;

#define k 'k' //king
#define r 'r' //rook
#define q 'q' //queen
#define p 'p' //pawn
#define b 'b' //bishop
#define n 'n' //night

#define K 'K' //king
#define R 'R' //rook
#define Q 'Q' //queen
#define P 'P' //pawn
#define B 'B' //bishop
#define N 'N' //night

#define DIM 8 //Dimension del tablero
#define VC 0 //vacio
#define AT 1 //atacado
#define OC 2 //ocupado

void solution() {
    //ofstream out("out.txt");
    string FEN;
    queue<string> backup;
    while (cin >> FEN) {
        vector<vector<short int>> chessB(DIM, vector<short int>(DIM, VC));
        int numRow = 0;
        int numCol = 0;
        for (int i=0; i<FEN.length(); i++) {
            if (FEN[i] == '/') {
                numRow++;
                numCol = 0;
                continue;
            }
            if (isdigit(FEN[i])) {
                numCol += (FEN[i] - '0')-1;
            } else if (isalpha(FEN[i])) {
                chessB[numRow][numCol] = OC;
                backup.push(to_string(numRow)+to_string(numCol)+FEN[i]);

            }
            numCol++;
        }
        
        while (!backup.empty()) {
            string recover = backup.front();
            backup.pop();
            numRow = recover[0]-'0';
            numCol = recover[1]-'0';
            char piece = recover[2];

            if (piece == k || piece == K) {
                if (numCol-1 >= 0) {
                    if(chessB[numRow][numCol-1] <= AT)
                        chessB[numRow][numCol-1] = AT;
                }
                if (numCol+1 < DIM) {
                    if(chessB[numRow][numCol+1] <= AT)
                        chessB[numRow][numCol+1] = AT;
                }
                if (numRow-1 >= 0) {
                    if (numCol-1 >= 0) {
                        if(chessB[numRow-1][numCol-1] <= AT)
                            chessB[numRow-1][numCol-1] = AT;
                    }
                    if(chessB[numRow-1][numCol] <= AT)
                        chessB[numRow-1][numCol] = AT;
                    if (numCol+1 < DIM) {
                        if(chessB[numRow-1][numCol+1] <= AT)
                            chessB[numRow-1][numCol+1] = AT;
                    }
                }
                if (numRow+1 < DIM) {
                    if (numCol-1 >= 0) {
                        if(chessB[numRow+1][numCol-1] <= AT)
                            chessB[numRow+1][numCol-1] = AT;
                    }
                    if(chessB[numRow+1][numCol] <= AT)
                        chessB[numRow+1][numCol] = AT;
                    if (numCol+1 < DIM) {
                        if(chessB[numRow+1][numCol+1] <= AT)
                            chessB[numRow+1][numCol+1] = AT;
                    }
                }
            }else if (piece == r || piece == R) {
                for(int i=numCol+1; i<DIM; i++) {
                    if(chessB[numRow][i]  <= AT)
                        chessB[numRow][i] = AT;
                    else
                        break;
                }
                for(int i=numCol-1; i>=0; i--) {
                    if(chessB[numRow][i] <= AT)
                        chessB[numRow][i] = AT;
                    else
                        break;
                }
                for(int i=numRow+1; i<DIM; i++) {
                    if(chessB[i][numCol] <= AT)
                        chessB[i][numCol] = AT;
                    else
                        break;
                }
                for(int i=numRow-1; i>=0; i--) {
                    if(chessB[i][numCol] <= AT)
                        chessB[i][numCol] = AT;
                    else
                        break;
                }
            } else if (piece == q || piece == Q) {
                for(int i=numCol+1; i<DIM; i++) {
                    if(chessB[numRow][i] <= AT)
                        chessB[numRow][i] = AT;
                    else
                        break;
                }
                for(int i=numCol-1; i>=0; i--) {
                    if(chessB[numRow][i] <= AT)
                        chessB[numRow][i] = AT;
                    else
                        break;
                }
                for(int i=numRow+1; i<DIM; i++) {
                    if(chessB[i][numCol] <= AT)
                        chessB[i][numCol] = AT;
                    else
                        break;
                }
                for(int i=numRow-1; i>=0; i--) {
                    if(chessB[i][numCol] <= AT)
                        chessB[i][numCol] = AT;
                    else
                        break;
                }
                int auxRow = numRow;
                int auxCol = numCol;
                while(auxRow > 0 && auxCol > 0) {
                    if (chessB[auxRow-1][auxCol-1] <= AT)
                        chessB[--auxRow][--auxCol] = AT;
                    else
                        break;
                }
                auxRow = numRow;
                auxCol = numCol;
                while(auxRow > 0 && auxCol < DIM) {
                    if (chessB[auxRow-1][auxCol+1] <= AT)
                        chessB[--auxRow][++auxCol] = AT;
                    else
                        break;
                }
                auxRow = numRow;
                auxCol = numCol;
                while(auxRow < DIM-1 && auxCol > 0) {
                    if (chessB[auxRow+1][auxCol-1] <= AT)
                        chessB[++auxRow][--auxCol] = AT;
                    else
                        break;
                }
                auxRow = numRow;
                auxCol = numCol;
                while(auxRow < DIM-1 && auxCol < DIM-1) {
                    if (chessB[auxRow+1][auxCol+1] <= AT)
                        chessB[++auxRow][++auxCol] = AT;
                    else
                        break;
                }
            } else if (piece == p || piece == P) {
                if (piece == p) {
                    if (numRow+1 < DIM) {
                        if (numCol-1 >= 0) {
                            if(chessB[numRow+1][numCol-1] <= AT)
                                chessB[numRow+1][numCol-1] = AT;
                        }
                        if (numCol+1 < DIM) {
                            if(chessB[numRow+1][numCol+1] <= AT)
                                chessB[numRow+1][numCol+1] = AT;
                        }
                    }
                } else {
                    if (numRow-1 >= 0) {
                        if (numCol-1 >= 0) {
                            if(chessB[numRow-1][numCol-1] <= AT)
                                chessB[numRow-1][numCol-1] = AT;
                        }
                        if (numCol+1 < DIM) {
                            if(chessB[numRow-1][numCol+1] <= AT)
                                chessB[numRow-1][numCol+1] = AT;
                        }
                    }
                }
            } else if (piece == b || piece == B) {
                int auxRow = numRow;
                int auxCol = numCol;
                while(auxRow > 0 && auxCol > 0) {
                    if (chessB[auxRow-1][auxCol-1] <= AT)
                        chessB[--auxRow][--auxCol] = AT;
                    else
                        break;
                }
                auxRow = numRow;
                auxCol = numCol;
                while(auxRow > 0 && auxCol < DIM) {
                    if (chessB[auxRow-1][auxCol+1] <= AT)
                        chessB[--auxRow][++auxCol] = AT;
                    else
                        break;
                }
                auxRow = numRow;
                auxCol = numCol;
                while(auxRow < DIM-1 && auxCol > 0) {
                    if (chessB[auxRow+1][auxCol-1] <= AT)
                        chessB[++auxRow][--auxCol] = AT;
                    else
                        break;
                }
                auxRow = numRow;
                auxCol = numCol;
                while(auxRow < DIM-1 && auxCol < DIM-1) {
                    if (chessB[auxRow+1][auxCol+1] <= AT)
                        chessB[++auxRow][++auxCol] = AT;
                    else
                        break;
                }
            } else if (piece == n || piece == N) {
                if(numRow-2 >= 0) {
                    if (numCol-1 >= 0) {
                        if (chessB[numRow-2][numCol-1] <= AT)
                            chessB[numRow-2][numCol-1] = AT;
                    } if (numCol+1 <= DIM-1) {
                        if(chessB[numRow-2][numCol+1] <= AT)
                            chessB[numRow-2][numCol+1] = AT;
                    }
                }
                if(numRow+2 <= DIM-1) {
                    if (numCol-1 >= 0) {
                        if(chessB[numRow+2][numCol-1] <= AT)
                            chessB[numRow+2][numCol-1] = AT;
                    } if (numCol+1 <= DIM-1) {
                        if(chessB[numRow+2][numCol+1] <= AT)
                            chessB[numRow+2][numCol+1] = AT;
                    }
                }
                if(numCol-2 >= 0) {
                    if (numRow-1 >= 0) {
                        if (chessB[numRow-1][numCol-2] <= AT)
                            chessB[numRow-1][numCol-2] = AT;
                    } if (numRow+1 <= DIM-1) {
                        if(chessB[numRow+1][numCol-2] <= AT)
                            chessB[numRow+1][numCol-2] = AT;
                    }
                }
                if(numCol+2 <= DIM-1) {
                    if (numRow-1 >= 0) {
                        if (chessB[numRow-1][numCol+2] <= AT)
                            chessB[numRow-1][numCol+2] = AT;
                    } if (numRow+1 <= DIM-1) {
                        if (chessB[numRow+1][numCol+2] <= AT)
                            chessB[numRow+1][numCol+2] = AT;
                    }
                }                    
            }
        }
        int freeSpa = 0;
        for(int i=0; i<DIM; i++) {
            for(int j=0; j<DIM; j++) {
                if (chessB[i][j] == VC)
                    freeSpa++;
            }
        }
        cout << freeSpa << endl;
        /*
        for(int i=0; i<DIM; i++) {
            for(int j=0; j<DIM; j++)
                cout << chessB[i][j] << " ";
            cout << endl;
        }*/
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    solution();
    return 0;
}
