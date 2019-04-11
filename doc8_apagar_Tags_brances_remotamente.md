Para apagar tags no local git
$git tag    #lista as tags

depois git tag -d tag   #com o nome da tag versao da tag
$git tag -d "1.0.tag"

esta alteracao no git no portatil depois de fazermos o $git push origin master --tags
as alteracoes nao sao feitas no github

$git push origin :tag   #a tag que quero apagar e depois atualiza o github
                         e ja aparece as alteracoes em que apagamos as tags no github
