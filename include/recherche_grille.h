//prototypes et define, pour les fonctions de recherches dans grille
#define M (N*N)
#define ALPHABET_SIZE 26
#define  MAX_LENGHT M

void findWordsUtil(char mat[N][N], int visited[N][N], int i, int j, char str[M]);
void findWords(char mat[N][N]);
int compte_points(char mot[]);
