Diferanca entre Merge e Rebase:

#Merge cria um commit novo a cada alteracao

#Rebase cria um commit e envia para o inicio da fila perdendo o historico de alteracao

Comandos uteis

$mkdir rebase-merge
$cd rebase-merge
$git init
$vim foo
$git add foo
$git commit -m "Add foo"
$git checkout -b test  # cria um branch
$vim novo-arquivo
$git add novo-arquivo
$git commit -m "Add novo-arquivo"
$git log               #mostra os 2 commit

$git checkout master  #so tenho arquivo foo
$git log      #para confirmar so 1 commit em master
$vim fizzz   #2do novo arquivo no master
$git add fizz
$git commit -m"Add fizz"
$git log
$git merge novo-arquivo    #arquivo que estava fora do master junta tudo usando estrategia                            recursiva
$git log    #mostra tudo o que aconteceu com os commit
$git log --graph  ##mostra o grafico com os commit com o historico linear



REBASE:
ainda no master criar um novo arquivo buzz
$vim buzz
$git add buzz
$git commit -m "Add buzz"
$git log    #mostra o novo commit buzz
$git checkout -b 'rebase-branch'                 #novo rebase branch
$vim bla  #novo arquivo bla dentro de rebase
$git add bla
$git commit -m "Add bla"
$git log
$git checkout master    #mudo para master para fazer o branch ou seja juntar com a tecnica                         rebase
$git log
$vim seila
$git add seila
$git commit -m "Add seila"
$git log
$git rebase rebase-branch  #aqui coloca a nossa alteracao para o topo da lista
$git log --graph           #verificamos que nao criou um commit extra e colocou diretament                            e o novo commit no topo da lista de commit


