#include <iostream>

using namespace std;
//void Menfisil(int arr[], int& n) {
//    int j = 0; 
//
//    for (int i = 0; i < n; i++) {
//        
//        if (arr[i] >= 0) {
//            arr[j++] = arr[i];
//        }
//    }
//        n = j; 
//}
//
//int main() {
//    const int SIZE = 10; 
//    int arr[SIZE];
//
//    
//    for (int i = 0; i < SIZE; i++) {
//        arr[i] = (rand() % 101) - 50; 
//    }
//
//    int n = SIZE; 
//   
//    cout << "Massiv (ilk vəziyyət): ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    Menfisil(arr, n);
//
//
//    cout << "Massiv (mənfi ədədlər çıxarılıb): ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;









//void mergeArrays(int A[], int M, int B[], int N, int C[], int& sizeC) {
//    sizeC = M + N; 
//
//    
//    for (int i = 0; i < M; i++) {
//        C[i] = A[i];
//    }
//
//   
//    for (int i = 0; i < N; i++) {
//        C[M + i] = B[i];
//    }
//}
//
//int main() {
//    int M, N;
//
//   
//    cout << "A massivi üçün ölçünü daxil edin (M): ";
//    cin >> M;
//
//    cout << "B massivi üçün ölçünü daxil edin (N): ";
//    cin >> N;
//
//
//    const int MAX_SIZE = 100;
//    int A[MAX_SIZE];
//    int B[MAX_SIZE];
//    int C[MAX_SIZE * 2];
//
//   
//    cout << "A massivinin elementlərini daxil edin:\n";
//    for (int i = 0; i < M; i++) {
//        cin >> A[i];
//    }
//
//    cout << "B massivinin elementlərini daxil edin:\n";
//    for (int i = 0; i < N; i++) {
//        cin >> B[i];
//    }
//
//    int sizeC = 0;
//    mergeArrays(A, M, B, N, C, sizeC);
//
//    
//    cout << "Birləşmiş C massivi: ";
//    for (int i = 0; i < sizeC; i++) {
//        cout << C[i] << " ";
//    }
//    cout << endl;
//
//    return 0;















//
//
void findCommonElements(int A[], int& M, int B[], int N) {
    int commonCount = 0; 

    
    for (int i = 0; i < N; i++) {
        
        for (int j = 0; j < M; j++) {
            if (B[i] == A[j]) {
                
                A[commonCount] = B[i];
                commonCount++;
                break;
            }
        }
    }

   
    M = commonCount; 
}

int main() {
    int M, N;

    
    cout << "A massivi üçün ölçünü daxil edin (M): ";
    cin >> M;

    cout << "B massivi üçün ölçünü daxil edin (N): ";
    cin >> N;

  
    int A[100]; 
    int B[100];

   
    cout << "A massivinin elementlərini daxil edin:\n";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    
    cout << "B massivinin elementlərini daxil edin:\n";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    
    findCommonElements(A, M, B, N);
  
    cout << "Ortak elementlərlə A massivi: ";
    for (int i = 0; i < M; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

}