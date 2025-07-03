class BruteForce:
    def brute_force(self, s, t):
        if len(s) != len(t):
            return False
        
        t_list = list(t)


        for i in s:
            if i in t_list:
                t_list.remove(i)
            else:
                return False
            
        return True
    

test = BruteForce()

print(test.brute_force("mahdiar", "mahdiyar"))
print(test.brute_force("mahdiar", "mahdiar"))