#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
  void welcome();
 void welcome_portal();
 void village();
 void welcome_portal(){int n1,c1,d1,d2;
                        long int pin;
                    char ss[50],name[20],address[150],mob[10],description[1000],sub[1000];
 	system("cls");
	printf("\t\t\t\tWELCOME TO\n\t\t\t RAJASTHAN SMART VILLAGE PORTAL\n");
	printf(" TNTRODUCTION:- WITH HELP OF THIS PORTAL YOU CAN KNOW ABOUT YOUR VILLAGE ,SEARCH YOUR VILLAGE,VILLAGES OF RAJSTHAN ,\n YOU CAN SEND ANY COMPLAINT TO RAJASTHAN GOVT. ABOUT YOUR VILLAGE ,YOU CAN FIND SPECIAL ABOUT VILLAGE ETC. \n");
	printf("CHOOSE ONE OF THE FOLLOWING OPTION \n1.KNOW YOUR VILLAGE\n2.SEARCH YOUR VILLAGE\n3.DATA ABOUT VILLAGES OF RAJSTHAN\n4.SEND COMPLAINT TO THE RAJASTHAN GOVT. ABOUT YOUR VILLAGE\n\n");
	scanf("%d",&n1);
    switch(n1){
    	case 1:{ system("cls");
    		printf("UNFOUTUNETLY NOW THE ONLY VILLAGE HARNAWA IS AVILABLE AND IT'S CODE IS '1001'\n");
		printf("ENTER VILLAGE CODE\n");
		scanf("%d",&c1);
		if(c1==1001)
		{ 
		 village();
	     }
		break;
		}
    		
	case 2:
		{
		printf("Enter the pin code\n");
		scanf("%d",&pin);
		printf("Enter the VILLAGE NAME\n");
		scanf("%s",&ss);
		printf("\nNOTE:-- DUE TO DEMOSTRATION PERPUSE WE HAVE  DATA ABOUT ONLY A SINGLE VILLAGE (HARNAWA 1)\nWE CAN'T PROVIDE YOU ANY DETAILS ABOUT OTHER VILLAGE SORRY FOR INCONVINIOUS\n ");
		break;
		}
	case 3:
		{
		printf("SL NO\t\t\t\tDISYRICT\t\t\tTOTAL VILLAGE\n1\t\t\t\tAJMER\t\t\t\t1123\n2\t\t\t\tALWAR\t\t\t\t2072\n3\t\t\t\tBANSWARA\t\t\t1517\n4\t\t\t\tBARNA\t\t\t\t1229\n5\t\t\t\tBARMER\t\t\t\t2464\n6\t\t\t\tBHARTPUR\t\t\t1534\n7\t\t\t\tBHILWRA\t\t\t\t1843\n8\t\t\t\tBIKANER\t\t\t\t925\n9\t\t\t\tBUNDI\t\t\t\t883\n10\t\t\t\tCHITTAURGARH\t\t\t1737\n11\t\t\t\tCHURU\t\t\t\t909\n12\t\t\t\tDAUSA\t\t\t\t1114\n13\t\t\t\tDHAULPUR\t\t\t825\n14\t\t\t\tBUNGARPUR\t\t\t980\n15\t\t\t\tGANGANAGAR\t\t\t3034\n16\t\t\t\tHANUMANGARH\t\t\t1913\n17\t\t\t\tJAIPUR\t\t\t\t2199\n18\t\t\t\tJAISALMER\t\t\t801\n19\t\t\t\tJALOR\t\t\t\t805\n20\t\t\t\tJHALAWAR\t\t\t1615\n21\t\t\t\tJHUNJHUNNUN\t\t\t945\n22\t\t\t\tJODHPUR\t\t\t\t1846\n23\t\t\t\tKARAULI\t\t\t\t892\n24\t\t\t\tKOTA\t\t\t\t885\n25\t\t\t\tNAGAUR\t\t\t\t1605\n26\t\t\t\tPALI\t\t\t\t1041\n27\t\t\t\tPARTAPGARH\t\t\t1006\n28\t\t\t\tRAJSANMAND\t\t\t1059\n29\t\t\t\tSAWAI MADHOPUR\t\t\t818\n30\t\t\t\tSIKAR\t\t\t\t1184\n31\t\t\t\tSIROHI\t\t\t\t487\n32\t\t\t\tTONK\t\t\t\t1192\n33\t\t\t\tUDAIPUR\t\t\t\t2496\n");
			break;
		}
		
    case 4:
    	{   printf("PLEASE ENTER YOUR NAME\n");
    	    scanf("%s",&name);
    	     printf("PLEASE ENTER YOUR ADDRESS\n");
    	     scanf("%s",&address);
    	      printf("PLEASE ENTER YOUR MOBILE NUMBER\n");
    	      scanf("%s",&mob);
    	      printf("ENTER THE SUBJECT ABOUT YOUR COMPLAINT\n");
    	      scanf("%s",&sub);
    	      printf("ENTER THE DESCRIPTION ABOUT YOU COMPLAINT\n");
    	      scanf("%s",&description);
    	      printf("%S");
    	      printf("THANK YOU MR.\ MRS. %s FOR REGISTRING YOUR COMPLAINT,WE CONSIDERD ABOUT IT AS SOON AS POSSIBLE\n\n\nTO CONTACT @ GRAM-PANCHAYAT:-\nEMAIL:-gramseva@gmail.com\noffice addresss:-Dhandholi Road Near Sahid Mangage Singh Smarak Harnawa Patti\n",name);
    		break;
		}
			
	
	default :
	{ printf("wrong Entry");
	}
	}
	printf("ENTER 0 FOR MAIN MANUE\n\n");
	  scanf("%d",&d2);
	  if(d2==0)
	  {
	  welcome_portal();
	  }
	  else
	{
		printf("WRONG ENTRY TRY AGAIN");
		
	}
	  }
 void welcome(){int n=0;
	printf("\t\t\t\t\tWELCOME TO RAJSTHATN SMART VILLAGE \n\n");
	printf(" Rajasthan  ( literally, 'Land of Kings')is India's largest state by area (342,239\n square kilometres (132,139 sq mi) or 10.4% of India's total area). It is located on\n the northwestern side of the India, where it comprises most of the wide and \n inhospitable Thar Desert (also known as the 'Rajasthan Desert' and 'Great Indian\n Desert') and shares a border with the Pakistani provinces of Punjab to the northwest\n and Sindh to the west, along the Sutlej-Indus river valley. Elsewhere it is bordered\n by five other Indian states: Punjab to the north; Haryana and Uttar Pradesh to the \n northeast; Madhya Pradesh to the southeast; and Gujarat to the southwest\n\n");
	printf(" Major features include the ruins of the Indus Valley Civilisation at Kalibanga; the Dilwara\n Temples, a Jain pilgrimage site at Rajasthan's only hill station, Mount Abu, in\n the ancient Aravalli mountain range; and, in eastern Rajasthan, the Keoladeo National\n Park near Bharatpur, a World Heritage Site[5] known for its bird life. Rajasthan\n is also home to three national tiger reserves, the Ranthambore National Park in Sawai\n Madhopur, Sariska Tiger Reserve in Alwar and Mukundra Hill Tiger Reserve in Kota\n\n");
	printf(" state was formed on 30 March 1949 when Rajputana – the name adopted by the British Raj for\n its dependencies in the region[6] – was merged into the Dominion of India.\n Its capital and largest city is Jaipur. Other important cities are Jodhpur,\n Kota, Bikaner, Ajmer and Udaipur.\n\n");
	printf("ENTER 0 TO ENTER RAJSTHAN SMART VILLAGE PORTAL\n\n");
	scanf("%d",&n);
    if(n==0){
    	welcome_portal();
	}
	
	else
	{
		printf("WRONG ENTRY TRY AGAIN");
		
	}
	}
 

int main()
{  welcome();
getch();
return 0;	
}
 void village()
 { int d3,d1;
 				system("cls");
		printf("CHOOSE THE FOLLOWING ONE \n\n");
		printf("11\t\t\t\tABOUT HARNAWA PATTI\n12\t\t\t\tPOPULATION OF HARNAWA\n13\t\t\t\tCONNECTIVITY OF HARNAWA PATTI\n14\t\t\t\tNEAR BY VILLAGE OF HARNAWA PATTI\n15\t\t\t\tHISTORY OF HARNAWA PATTI\n16\t\t\t\tSMADHI OF RANABAI IN HARNAWA PATTI\n17\t\t\t\tHOW REACH TO HARNAWA PATTI\n18\t\t\t\tSCHOOL IN HARNAWA PATTI\n19\t\t\t\tELECTRICY SYSTEM IN HARNAWA\n20\t\t\t\tWATER SYSTEM IN HARNAWA PATTI\n");
		scanf("%d",&d1);
		switch(d1){
			    system("cls");
			    case 11:
				{printf("About Harnawa Patti:-\n\nHarnawa Patti\n\nBlock / Tehsil = Parbatsar\nDistrict = Nagaur\nState = Rajasthan\n");
                 printf("\nAccording to Census 2011 information the location code or village code of\n Harnawa Patti village is 083527. Harnawa Patti village is located in Parbatsar Tehsil of Nagaur \n district in Rajasthan, India. It is situated 37km away from sub-district headquarter Parbatsar\n and 113km away from district headquarter Nagaur. As per 2009 stats, Harnawa is the gram\n panchayat of Harnawa Patti village.\n\nThe l area of village is 2339.48 hectares. Harnawa Patti has a total population of 4,745\n peoples. There are about 915 houses in Harnawa Patti village. Parbatsar is nearest town\n to Harnawa Patti which is approximately 37km away.\n");
                break;
				}
				case 12:
					{
					printf("Population of Harnawa Patti:-\n\nTotal Population=4,745\nMale Population=2,336\nFemale Population=2,409\n\n");
					break;
					}
				case 13:
					{
						printf("Connectivity of Harnawa Patti:-\n\nType\t\t\t\t\tStatus\nPublic Bus Service\t\t\tAvailable within 10+ km distance\nPrivate Bus Service\t\t\tAvailable within village\nRailway Station\t\t\t\tAvailable within 5 - 10 km distance\n\n");
						break;
					}
				case 14:
				{ printf("Nearby Villages of Harnawa Patti:-\n\n1.\tBhadwa\n2.\tJhujharpura\n3.\tBadoo\n4.\tGarhi\5.\tHukmpura\n6.\tBarnel\n7.\tKurada\n8.\tBeenthwaliya\n9.\tMerasi\n10.\tKhedapura\n11.\tAntroli Sanga\n\n");
				break;
					}
				case 15:
				{printf("HISTORY:-\n\nThe village situated midway between Degana railway station and Parbatsar towns.\n\nIt is known as the birthplace of Ranabai, a revered warrior girl, born on 1543 AD (aksya trirtya), in\n the family of Jalam Singh Dhoon. Khojiji (Chatur Das ji maharaj)was the religious guru of Ranabai.\n She didn't marry. One day her father was coming from Khinyala. He was arrested by ghosts in Gechhala\n Pond.They threatened him to kill until he gives vachan of the marriage of her daughter with a ghost\n named Bohara. So Jalam Singh engaged her daughter with Bohara. On the fixed date the ghost family\n came to marry Rana. Having spiritually power Rana pushed them out of the village.\n Thus she is worshiped by Hindu People. Two patriots of Harnawa sacrificed their lives\n for our nation. One of them is Mr.Ramkaran Thakan who sacrificed life during Meghdoot\n operation in 1992.Subedar Mangej Singh Rathore sacrificed his life during Kargil war.\n He was awarded The Veer Chakra .The land of Harnawa is the birth place of brave soldiers\n who sacrificed their lives and also a spiritual Land.The Ranabai temple famous for devotion\n attracts thousands of people every year. The bravery,Patriotism that Mangej Singh show in\n kargil war,The name of village's Govt school is given as Martyr Mangej Singh Govt senior sec\n school. On 6 June 2018, a marathon is also conducted from parbatsar to Harnawa village covering about\n 25 kms to remember the sacrifice of the Brave Mangej Singh and also to promote and motivate youngers\n of nearby villages to join the Indian Armed forces to serve the motherland with a prestige\n\n");
				 break;
						}	
				case 16:
				{printf("SMADHI OF RANA BAI :-\nRanabai took a live Samadhi at village Harnawa on bhadrpadi shukla trayodashi Samvat\n 1627 (1570 AD).[cit's Ranabai's brother Bhuwanji built a kachchi Samadhi after she died.[citation needed] The\n Samadhi is still present near the temple of Gopinath in Harnawa. The worship of Samadhi and the\n Gopinath temple is done traditionally by the descendants of her family.On the samadhi site\n at Harnawa village there is an annual grand fair organized every year on the Hindu calendar\n date Bhadva sudi teras, when devotees come from far-off places.Dharamshala near the Samadhi site.\n\n");
				break;
				}
				case 17:
				{printf("How to reach Harnawa:-\n\nHarnawa can be reached from Parbatsar - Piplod - Kanwlad - Janjila - Badu - Harnawa and another way from Parbatsar is \nParbatsar - Huldhani - Badu - Harnawa. One can also come from Merta City - Bherunda - Harsore - Bhakri - Harnawa.\nFrom Jaipur, Harnawa can be reached via Kishangarh.\n\n");
				break;
     			 } 	
				case 18:
				{
					printf("Schools in HARNAWA PAATTI:-\n1.SHAHID MANGAGE SINGH GOVT. SIN. SEC. SCHOOL\n2.SHREE KARNI VIDHA MONDIR SIN SEC SCHOOL\n3.GOVT.PRIMARY SCHOOL RAIKA KI DHANI\n4.GOVT. SEC. SCHOOL ACHARIYO KI DHANI\n5.GOVT. SEC. SCHOOL NATHO KI DHANI\n\n ");
				break;
					}
				case 19:
				{
				printf(" ELECTRICTY SYSTEM IN HARNAWA PATTI:-\n In HARNAWA PATTI a big power house of electricy is situated out side of the village at\n 'GULAR ROAD'1 km away from village.It's just above power haouse is 'BAGOT'than afer it\n 'MAKARANA CITY'.In vilaage now covered wires used to transwer electricty.And more than\n 1000 house having electricty from these houses");	
				break;
				}
				case 20:
				{
				printf(" WATER SYSTEM IN HARNAWA PATTI:-\n Thare are 4 parts of village North,South,East,West.Every part has it's own well and all the the part is giving water\n supply by these wells.IN 4-5 years new 10-15 tubwells also made by govt. at different placesfor water supply.\n NOTE:-In currently the CM's NAHAR YOGAN is reaching to the village.\n\n ");
				break;
				}				
	     default :
		 { printf("wrong ENTRY");
			 }
			 
			  }
			  printf("ENTER 1 FOR BACK MANUE\n");
			 scanf("%d",&d3);
			 if(d3==1)
			 {
			 	village();
			 }
			 else
	         {
	         	printf("WRONG ENTRY TRY AGAIN");
	         }

 }

