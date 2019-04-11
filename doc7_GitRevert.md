Quando fazemos uma modificacao a um documento 
$vim documento
depois de fazer commit dessa modificacao
$git commit -am "add new line"

se 

$git log
$git show "num de commit"   #desse commit que alteramos
mostranos as alteracoes que fizemos, e se pensar-mos que temos de alterar sem dar um reset
pois queremos decidir depois se a alteracao e valida ou nao.
imaginemos que e sexta feira e temos de abandonar o portatil e voltar segunda feira
ao trabalho  
:=)

$git log  #para apanhar o numero do commit e copiar esse numero hexadecimal

e fazemos o git revert

$git revert "hexadecimal do commit"

agora se fizermos o git log
o commit aparece com revert

ou seja o codigo foi apagado mas fica disponivel para poder ser melhorado
significa que a ultima alteracao feita nesse codigo nao funcionava
e assim e possivel rever o commit e modificar de novo para o melhorar e voltar a commit 
do mesmo
