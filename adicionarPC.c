#Comandos adicionar pc usando chave publica criada pelo terminal e adicionada ao github

$cd ~/.ssh/      #cria a chave publica
$cat id_rsa.pub  #dar enter e copiar o output para colar no git hub
		 #No github em settings/ ssh and gpg keys,  colar a chave publica
		 #desta forma e possivel autorizar o git a fazer commit no github

Criar um novo repositorio no social github

No terminal linux:
$git remote add origin https://github.com/user/repositorio.git
$git remote -v  #para saber origen fetch e push devolve este output
$git push -u origin master   #este comando faz o upload dos ficheiros


se alterados alguns dados nos ficheiros
$git push origin master    #desta forma sao enviadas as alteracoes
