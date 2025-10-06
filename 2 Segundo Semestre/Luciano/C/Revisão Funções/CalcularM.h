float calcularMedia(float nota[5][3]){
float mediaA=0;
float mediaS=0;

    for(int i=0; i<=4; i++){
        for(int j=0; j<=2; j++){
            mediaA = mediaA + nota[i][j] / 3;
        }
        mediaS = mediaA / 5;
    }
    return mediaS;
}