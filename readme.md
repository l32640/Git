# Github readme

Documento de texto comandos basicos vim:

$ vi File.md
i -> insert modificacoes ao texto
esc -> sair das modificacoes feitas ao texto
: -> iniciar comandos
w -> escrever salvar
q -> sair quit
tudo junto ":wq" na ultima linha depois de pressionar a tecla "esc"

Outros Comandos do git:

$git log
$git log --decorate       #mostra quem fez commit
$git log --author="nome"  #mostra os autores que tem o "nome" case sensitive
$git shortlog             #mostra todos os autores e commits
$git shortlog -sn         #mostra numero de commit e autor ordenado simplificado
$git log --graph          #mostra o que aconteceu de commit e branches
$git show "numero de commit comprido"
$git diff                 #mostra a ultima mudanca antes de commit
$git diff --name-only     #o ou os nomes de arquivo modificados
$git commit -am "Edit file"  #da o status de numero de linhas e outras info de alteracao
$git checkout file        #anula o ultima alteracao antes do commit. so a ultima alteracao.
$git reset HEAD file      #anula o commit com a ultima alteracao.
			  #e necessario voltar a fazer git checkout file para apagar alteracoes
$git reset --soft --mixed --hard
