class Solution:
    def multiplyStrings(self,s1,s2):
        # code here
        # return the product string
        fg1=1
        fg2=1
        if(s1[0]=='-'):
            s1=s1[1:]
            fg1=-1
        
        if(s2[0]=='-'):
            s2=s2[1:]
            fg2=-1
        
        num1 = s1[::-1]
        num2 = s2[::-1]
        result = [0] * (len(num1) + len(num2))
        
        for i in range(len(num1)):
            for j in range(len(num2)):
                result[i + j] += int(num1[i]) * int(num2[j])
                result[i + j + 1] += result[i + j] // 10
                result[i + j] %= 10
        
        sr=int(fg1)*(fg2);
        result_string = ''.join(map(str, result[::-1]))
        result_string = result_string.lstrip('0')
        if(sr==-1):
            result_string='-'+result_string
        
        if not result_string:
            return '0'
        return result_string

