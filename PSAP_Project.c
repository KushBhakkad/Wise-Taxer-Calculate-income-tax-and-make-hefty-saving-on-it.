#include<stdio.h>

float earnings(float, float, float, float, float, float, float, float, float *taxe, float *taxf, float *income, float *sourcea);
float taxes(int, float, float, float, float, float);
float surc(float, float, float);
void output(float, float, float, float, float, float);
void reductions();
float deductions(float, float, float, float, float, float, float);
void savings(float, float);

int main(){
printf("\n***TAX CALULATOR!!!***\n");
printf("\n\n***NOTE : This tax calculator calculates tax for a Indian resident indivisual who doesn't opt for taxation under Section 115BAC and that too after the financial year 2021 - 2022 only!!!");

char name[100];
float sourcea1, sourceb, sourcec, sourced, sourcee1, sourcee2, sourcee3, sourcef, taxe, taxf, income, sourcea, taxabc = 0, tax = 0, surcharge = 0, education_cess = 0, higher_education_cess = 0, health_cess = 0, cess = 0, tax1 = 0, red1 = 0, red2 = 0, red3 = 0, red4 = 0, red5 = 0, red = 0, tax2 = 0;
int age;

printf("\n\nEnter  name of tax payer: ");
scanf("%s",&name);

earnings(sourcea1, sourceb, sourcec, sourced, sourcee1, sourcee2, sourcee3, sourcef, &taxe, &taxf, &income, &sourcea);

printf("\nEnter Age: ");
scanf("%d",&age);

tax = taxes(age, sourcea, taxabc, taxe, taxf, tax);
surcharge = surc(income, surcharge, tax);
tax += surcharge;
education_cess = ((tax / 100) * 2);
higher_education_cess = ((tax / 100) * 1);
health_cess = ((tax / 100) * 1);
cess = ((tax / 100) * 4);
tax += cess;
tax1 = tax;
output(income, tax1, surcharge, education_cess, higher_education_cess, health_cess);

reductions();
red = deductions(red1, red2, red3, red4, red5, sourcea, red);
sourcea -= red;

tax = taxes(age, sourcea, taxabc, taxe, taxf, tax);
surcharge = surc(income, surcharge, tax);
tax += surcharge;
education_cess = ((tax / 100) * 2);
higher_education_cess = ((tax / 100) * 1);
health_cess = ((tax / 100) * 1);
cess = ((tax / 100) * 4);
tax2 += cess;
output(income, tax2, surcharge, education_cess, higher_education_cess, health_cess);

savings(tax1, tax2);
}

float earnings(float sourcea1, float sourceb, float sourcec, float sourced, float sourcee1, float sourcee2, float sourcee3, float sourcef, float *taxe, float *taxf, float *income, float *sourcea){
    printf("\nEnter income from...");
        printf("\n\ta.) Salary: ");
        scanf("%f",&sourcea1);
        printf("\n\tb.) Business or profession: ");
        scanf("%f",&sourceb);
        printf("\n\tc.) House property: ");
        scanf("%f",&sourcec);
        printf("\n\td.) Agriculture: ");
        scanf("%f",&sourced);
        printf("\n\te.) Capital gains: ");
            printf("\n\t\ti.) short term capital gains: ");
            scanf("%f",&sourcee1);
            printf("\n\t\tii.) long term capital gains(@10% tax): ");
            scanf("%f",&sourcee2);
            printf("\n\t\tiii.) long term capital gains(@20% tax): ");
            scanf("%f",&sourcee3);
        printf("\n\tf.) Other sources: ");
        scanf("%f",&sourcef);

    *taxe = ((sourcee1 / 100) * 15) + ((sourcee2 / 100) * 10) + ((sourcee3 / 100) * 20);
    *taxf = ((sourcef / 100) * 30);

    *income = sourcea1 + sourceb + sourcec + sourced + sourcee1 + sourcee2 + sourcee3 + sourcef;
    *sourcea = (sourcea1 - 50000) + sourceb + sourcec;
}

float taxes(int age, float sourcea, float taxabc, float taxe, float taxf, float tax){
    if (age < 60){
        if (sourcea > 1000000){
            taxabc = 112500 + ((sourcea - 1000000) / 100) * 30;
        }else if (sourcea > 500000){
            taxabc = 12500 + ((sourcea - 500000) / 100) * 20;
        }else if (sourcea > 250000){
            taxabc = 0 + ((sourcea - 250000) / 100) * 5;
        }else{
            taxabc = 0;
        }
    }else if (age<80){
        printf("\nThe tax payer is a senior citizen.");
        if (sourcea > 1000000){
            taxabc = 110000 + ((sourcea - 1000000) / 100) * 30;
        }else if (sourcea > 500000){
            taxabc = 10000 + ((sourcea - 500000) / 100) * 20;
        }else if (sourcea > 300000){
            taxabc = 0 + ((sourcea - 300000) / 100) * 5;
        }else{
            taxabc = 0;
        }
    }else{
        printf("\nThe tax payer is a super senior citizen.");
        if (sourcea > 1000000){
            taxabc = 100000 + ((sourcea - 1000000) / 100) * 30;
        }else if (sourcea > 500000){
            taxabc = 0 + ((sourcea - 500000) / 100) * 20;
        }else{
            taxabc = 0;
        }
    }

    tax = taxabc + taxe + taxf;
    return (tax);
}

float surc(float income, float surcharge, float tax){
    if(income > 50000000){
        surcharge = ((tax / 100) * 37);
    }else if(income > 20000000){
        surcharge = ((tax / 100) * 25);
    }else if(income > 10000000){
        surcharge = ((tax / 100) * 15);
    }else if(income > 5000000){
        surcharge = ((tax / 100) * 10);
    }else{
        surcharge = 0;
    }
    return (surcharge);
}

void output(float income, float t, float surcharge, float a, float b, float c){
    printf("\nYour net taxable income is: %f\n", income);
    printf("\nHence, your net tax is: %f\n", t);
        printf("\n\tWhich includes:");
        printf("\n\tSurcharge: %f", surcharge);
        printf("\n\tEducation cess: %f", a);
        printf("\n\tHigher education cess: %f", b);
        printf("\n\tHealth cess: %f\n", c);
}

void reductions(){
    printf("\nTo reduce your tax you can add the following deductions to you net taxable income: ");
    printf("\n\t1.)Section 80C: This section allows deductions for investments made in specified instruments such as Public Provident Fund (PPF), National Savings Certificate (NSC), Equity-Linked Saving Scheme (ELSS), etc.");
    printf("\n\t2.)Section 80D: This section allows deductions for medical insurance premium paid for self, family, and parents.");
    printf("\n\t3.)Section 80E: This section allows deductions for interest paid on education loan taken for higher education.");
    printf("\n\t5.)Section 80GG: This section allows deductions for rent paid if you do not have a house of your own.");
    printf("\n\t6.)Section 80TTA: This section allows deductions for interest earned on savings bank account.\n");
}

float deductions(float red1, float red2, float red3, float red4, float red5, float sourcea, float red){
    printf("\nEnter amount:");
        printf("\n\ta.)Section 80C: ");
        scanf("%f",&red1);
        printf("\n\tb.)Section 80D: ");
        scanf("%f",&red2);
        printf("\n\tc.)Section 80E: ");
        scanf("%f",&red3);
        printf("\n\te.)Section 80GG: ");
        scanf("%f",&red4);
        printf("\n\tf.)Section 80TTA: ");
        scanf("%f",&red5);

    if (red1 > 150000){
        red = 150000;
    }else{
        red = red1;
    }
    if (red2 > 100000){
        red += 100000;
    }else{
        red += red2;
    }
    if (red4 <= 60000 && red4 <= ((sourcea / 100) * 25)){
        red += red4;
    }else{
        if (((sourcea / 100) * 25) < 60000){
            red += ((sourcea / 100) * 25);
        }else{
            red += 60000;
        }
    }
    if (red5 > 10000){
        red += 10000;
    }else{
        red += red5;
    }
    if ((red + red3) < sourcea){
        red += red3;
    }else{
        printf("Error! you have applied deductions worth more than your income...");
    }
    return (red);
}

void savings(float tax1, float tax2){
    printf("\n\nSavings made on the tax to be paid after applying deductions = %f", (tax1 - tax2));
}
