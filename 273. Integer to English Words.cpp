class Solution {
public:
    string numberToWords(int num) {
    int k,j,i,w=0;
	map<int, string>maps;                                                                                  //用MAP记录字符型数字
  maps[0] = ""; maps[1] = "One"; maps[2] = "Two"; maps[3] = "Three"; maps[4] = "Four"; maps[5] = "Five";
 maps[6] = "Six";maps[7]="Seven"; maps[8] = "Eight"; maps[9] = "Nine"; maps[10] = "Ten"; 
maps[11] = "Eleven"; maps[12] = "Twelve"; maps[13] = "Thirteen";maps[14] = "Fourteen"; maps[15] = "Fifteen";
 maps[16] = "Sixteen";maps[17] = "Seventeen"; maps[18] = "Eighteen"; maps[19] ="Nineteen"; maps[20] = "Twenty";
 maps[30] = "Thirty"; maps[40] = "Forty"; maps[50] = "Fifty"; maps[60] = "Sixty"; maps[70] = "Seventy"; maps[80]= "Eighty";
 maps[90] = "Ninety"; maps[100] = "Hundred"; maps[1000] = "Thousand"; maps[1000000] = "Million";maps[1000000000]="Billion";
	string a;                                                                                              //定义string 型a记录字符串
	if(num==0)a="Zero";                                                                                    //若输入为0则另a等于zero
	while (num != 0)                                                                                       
	{	i = num % 1000;                                                                                //让输入的数字从后往前数，每三位为一组，用i记录每一组数字
		if(w==1&&i!=0)a=maps[1000]+" "+a;                                                              //判断i是千位还是十万位还是百万为
	    else if(w==2&&i!=0)a=maps[1000000]+" "+a;
	    else if(w==3&&i!=0)a=maps[1000000000]+" "+a;
		j = i % 100;                                                                                    //用j记录i的十位和个位，并赋给a
		if (j>0&&j <= 20) {                                                                             //若j大于0且小于20，则从maps中直接赋给a
                      a = maps[j]+" "+a;
		}
		if(j>20) {                                                                                      //若j大于20则由map中的十位和百位组合赋给a
			int x = j % 10;                                                                         //定义x记录j的个位
			j = (j / 10) * 10;                                                                      //对j的十位进行取整
			if(x==0)a=maps[j]+" "+a;                                                                //若x即个位为0，则直接赋十位数给a
		    else a =maps[j]+" "+ maps[x]+" "+a;                                                         //x不为0，则由个位与十位组合赋给a
		}
	    k = i / 100;                                                                                        //用k记录i的百位，并赋给a
        if(k!=0){ a = maps[k]+" "+maps[100] +" "+ a;}
		w++;
		num = num / 1000;                                                                                //去掉num的后三位数
     	a.erase(a.find_last_not_of(" ") + 1);                                                                    //去除a后面对于的空格
	}
	return a;
    }
};