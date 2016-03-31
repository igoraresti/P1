import subprocess

cmd = "gcc ft_print_alphabet.c test2.c -o programa"
subprocess.call(cmd, shell = True)
cmd = "./programa"
pipe = subprocess.Popen(cmd, shell = True, stdout=subprocess.PIPE,
                                           stderr=subprocess.PIPE)
out, err = pipe.communicate()
print "el output del programa es: "+out
