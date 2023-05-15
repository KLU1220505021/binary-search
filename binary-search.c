#include <stdio.h>


//bubble sort fonksiyonu
int bubble_sort(int *array,int uzunluk){
    //gecici degisken
    int gecici;
    int degisme = 1;
    int sinir = uzunluk;
    //degisme oldugu surece devam eden dongu
    while(degisme){
    degisme = 0;
    //sinir dahilinde arama karsilastirma yapacak dongu
    for (int i = 0; i < sinir - 1 ; i++)
    {
        //soldaki sagdakinden buyukse yer degistirilir
        if(array[i] > array[i+1]){
            gecici = array[i+1];
            array[i+1] = array[i];
            array[i] = gecici;
            //yer degistirme bildirilir
            degisme = 1;
        }
    }
    //en buyuk sayi en sagda olacaginda sinir sayisi bir azaltilir
    sinir--;
    }

    
  
    

}

int binarySearch(int array[], int uzunluk, int sayi)
{
    int sol = 0;
    int sag = uzunluk - 1 ;
    //gecerli bir aralik dahilinde dongu
    while (sol <= sag) {
        int orta = sol + (sag - sol) / 2;
        //Eger sayi ortadaki sayi ise sayi bulunmus demektir
         if (array[orta] == sayi)
            return orta;
 
        // Eger sayi ortadaki sayidan buyukse sol tarafi ele
        if (array[orta] < sayi)
            sol = orta + 1;
 
        // Eger sayi ortadaki sayidan kucukse sag tarafi ele
        else
            sag = orta - 1;
    }
 
    // eger gecerli araliklarda sayi bulunamamissa -1 dondur
    return -1;
}


int main(){
    int array[] = {4,8,3,84,47,76,9,24,68};
    //uzunlugu bul
    int uzunluk = sizeof(array)/sizeof(array[0]);
    int sayi;
    //verilen diziyi goster
    printf("verilen dizi : \n");
    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d ", array[i]);
    }
    //bubble sort ile sirala
    bubble_sort(array,uzunluk);
    printf("\nbubble sort ile siralanan dizi : \n");

    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d ", array[i]);
    }
    //aranacak sayiyi iste
    printf("\naranacak sayiyi giriniz : ");
    scanf("%d",&sayi);
    int result = binarySearch(array,9,sayi);
    //eger sonuc -1 degilse sayi bulunmus demektir
    if(result != -1)
    printf("aradiginiz sayi %d. indekstedir",result);
    //eger sonuc -1 den farkli ise sonuc bulunamamis demektir 
    else
    printf("aradiginiz sayi bulunamadi");
    return 0;
    
}