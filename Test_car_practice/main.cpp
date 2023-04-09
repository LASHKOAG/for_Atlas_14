#include <stdio.h>

struct Car
{
    Car()
    {
        printf("This is construct!\n");
        number_wheels = 4;
        number_doors = 4;
        isElectric = false;
        engine = 1.8;
    }

    Car(int a, int b){
        printf("%d\n", a);
        printf("%d\n", b);
    }

    int number_wheels;
    int number_doors;
    float engine;
    bool isElectric;


    void printHello()
    {
        printf("Hello!\n");
    }



    int write_file(){

        result = get_sum_2_numbers();

        FILE *f = fopen("test.txt", "w");
        if (f == NULL)
        {
            printf("Error: can't open file\n");
            return -1;
        }
        fprintf(f, "Number wheels: %d\n", number_wheels);
        fprintf(f, "Number doors: %d\n", number_doors);
        fprintf(f, "engine: %f\n", engine);
        fprintf(f, "Car is electric?: %d\n", isElectric);
        fclose(f);
    }
private:
    int result;

    int get_sum_2_numbers()
    {
        return number_doors + number_wheels;
    }

    ~Car(){
        //printf("This is DEstructor\n");
    }
};

void foo(){
     Car rt;
}

int main()
{



    Car bmw;

//    foo();
    bmw.printHello();
    bmw.get_sum_2_numbers();
    bmw.write_file();

bmw.get_sum_2_numbers();


    return 0;
}
