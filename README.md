# Wise-Taxer-Calculate-income-tax-and-make-hefty-saving-on-it.

**Introduction:**
Taxation is a complex process for many individuals, with various rules and regulations that are difficult to understand and keep track of. As a result, many people miss out on opportunities to save on taxes, either through ignorance or due to the cumbersome process of finding and taking advantage of these opportunities. Our tax saving application aims to solve this problem by providing a user-friendly and accessible platform that helps individuals understand and take advantage of tax-saving opportunities. With this application, users can keep track of their expenses and investments, and receive customized recommendations for tax-saving strategies based on their individual financial situation. Additionally, the application will help users keep track of deadlines and necessary documentation, making the tax-saving process as smooth and stress-free as possible.

**I. Problem statement**

The current income tax system is complex and confusing for many taxpayers, resulting in errors and inefficiencies in tax calculation. Therefore, there is a need to develop a user-friendly and accurate income tax calculator that simplifies the tax calculation process, reduces errors, and improves compliance with tax laws.

**II. Existing System**

The existing systems for tax calculation include government and third-party tax calculators, spreadsheet-based calculators, and tax preparation software. These system have problems like they are not easy to use, also some calculators do not have deductions option to reduce the tax.

**III. Proposed System**

 The system is very simple in design and to implement. The system requires very low system resources and the system will work in almost all configurations. It has got following features: 
 
●	Simple design

●	Ease in use

●	Makes money management Easy

●	Possible ways to save taxes depending upon your profession and income

**IV. Methodology**

An Algorithmic representation of the provided code:

1.	Start the program. 

2.	Print a message welcoming the user to the tax calculator.

3.	Prompt the user to enter their name. Call the function 'earnings' with the arguments sourcea1, sourceb, sourcec, sourced, sourcee1, sourcee2, sourcee3, sourcef, and pointers to taxe, taxf, income, and sourcea.

4.	 Prompt the user to enter their age. Call the function 'taxes' with the arguments age, sourcea, taxabc, taxe, taxf, and tax.

5.	 Calculate the surcharge using the 'surc' function with the arguments income, surcharge, and tax. 

6.	Add the surcharge to the tax. Calculate the education cess using the formula (tax / 100) * 2.

7.	 Calculate the higher education cess using the formula (tax / 100) * 1. 

8.	Calculate the health cess using the formula (tax / 100) * 1. 

9.	Calculate the cess using the formula (tax / 100) * 4.

10.	 Add the cess to the tax. Set tax1 equal to tax. Call the 'output' function with the arguments income, tax1, surcharge, education_cess, higher_education_cess, and health_cess. 

11.	Call the 'reductions' function. Call the 'deductions' function with the arguments red1, red2, red3, red4, red5, sourcea, and red. Subtract the value of red from sourcea. 

12.	Call the 'taxes' function again with the updated sourcea value. Calculate the surcharge using the 'surc' function with the arguments income, surcharge, and tax

13.	. Add the surcharge to tax2. Calculate the education cess using the formula (tax / 100) * 2. Calculate the higher education cess using the formula (tax / 100) * 1. 

14.	Calculate the health cess using the formula (tax / 100) * 1. 

15.	Calculate the cess using the formula (tax / 100) * 4. 

16.	Add the cess to tax2. Set tax2 equal to tax2 + cess. 

17.	Call the 'output' function again with the arguments income, tax2, surcharge, education_cess, higher_education_cess, and health_cess. 

18.	Call the 'savings' function with the arguments tax1 and tax2.

19.	 End the program. 

**V. Scope of work**

The code provided is a tax calculator program in the C programming language. Its scope of work includes: 

1.	Calculation of taxable income: The program prompts the user to enter the income from various sources such as salary, business or profession, house property, agriculture, capital gains, and other sources. It then calculates the total income and the income that is eligible for tax. 

2.	Calculation of tax: Based on the age and income of the taxpayer, the program calculates the tax payable. It applies different tax rates based on income slabs and age categories (i.e., normal taxpayer or senior citizen). The program also calculates surcharges and cesses. 

3.	Deductions: The program prompts the user to enter deductions that they are eligible for, such as medical expenses, donations to charitable institutions, and others. 

4.	Calculation of net tax payable: The program calculates the final tax payable by subtracting the deductions from the total tax. 

5.	Savings: The program calculates the tax savings that can be achieved by making investments in specified schemes such as Public Provident Fund, National Savings Certificate, and others. 

** Note that the program is designed to calculate tax for an Indian resident individual who does not opt for taxation under Section 115BAC and only for the financial year 2021-2022.**

Fig 1: Initial Output Screen

![Fig1](https://github.com/user-attachments/assets/6b1faf67-5bc7-4ea7-9012-fd22b86e442c)
 
Fig 2: Taking income sources from user and his/her age

![Fig2](https://github.com/user-attachments/assets/1bb451bd-4ce7-4472-b4b4-d60f5c5a29ad)

Fig 3: Displaying the Net Taxable amount and asking user if he/she wants to add deductions

![Fig3](https://github.com/user-attachments/assets/503904d8-54dc-4e9b-94f6-f0a0cf67e7af)
 
Fig 4: Asking User to Enter Deductions as per Section 80C,80D,80E,80GG,80TTA

![Fig4](https://github.com/user-attachments/assets/91bf7aa0-afa5-44ba-8cae-d16cc1f916fa)
 
Fig 5: Showing Final Net Taxable income, Net Tax, Savings made after applying deductions

![Fig5](https://github.com/user-attachments/assets/4f1f0c43-f8e7-44aa-b538-eb8ddab8d879)

**VI. Conclusion**

It can be observed that tax awareness is very important for civilians who pay various taxes to the government. It helps individuals and businesses understand their tax obligations and make informed decisions about their finances and ensure that they are in compliance with the tax laws. This system gives you all possible ways to save taxes just by entering the profession and income and reduces the complexity of the existing system thus, making it easier for the general public for better financial planning and management.  It can also increase transparency and fairness in the tax system, and promote public trust in government and its revenue collection efforts

**References**

[1]  Let us C by Yashwant Kanetkar 

[2]  Programming in ANSI C by Balaguruswamy 

[3] https://incometaxindia.gov.in/Pages/tools/income-tax-calculator-234ABC.aspx











