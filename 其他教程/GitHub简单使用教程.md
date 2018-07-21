# GitHub简单使用教程

written by *Garen*

---

## 前面的话

- 为什么跑来这里写这么一篇使用教程？

因为我想用GitHub来维护我们的信息学团队知识系统，但是全英文的话可能有点难理解。

我就在这里写简单的应用，帮助你们了解使用办法的同时也巩固了我自己的使用能力。

我很有预感我以后一定会用到这东西的。

还有：这是全球最大的同性交友网站，因为"Gay"Hub。。。

看这篇文章的时候一定不能光看不做！不然就没用了。

## 初识GitHub

不如马上点开这个超链接吧！[GitHub][1]

里面是不是有一个连接写着"learn GitHub without any code"，推荐点进去看看。锻炼英语应用能力。

这种东西不注册怎么能用？所以点开"Sign up"标签，用自己的email等资料注册一个GitHub账号吧！

## 第一件事

注册之后肯定就登录了啊！

登录后他会叫你弄一个new repository。

repository：贮藏处、仓库。

现在可以听他的，弄一个新的repository玩一下。

命名是随意的，只不过好像不能命名中文，不然会自动变成一个减号。。

为什么不能用中文？因为你的repository地址就是以这个名字为地址的。中文你叫他怎么办？

比如建立一个你写过的代码的repository，里面就放你写过AC过的代码。名字就可以叫做“finished code”。~~我英语好弱。。。~~

推荐勾上那个自动生成readme.md的选项。readme意思就是“读我”。在打开这个repository的时候就会自动显示这么一个东西，自动打开。

.md是什么鬼？其实这就是Markdown。具体是什么可以移步[这里][2]。虽然是luogu的东西，但是这也就是基本框架。并不难掌握。

之后你就会得到你自己的repository。

## 具体操作

这里会解释里面的基本英语单词到底是什么意思。而具体这个功能是干嘛的就要让你们自己玩玩看了。在实践中学习是最好的学习，胜过我打几千字。

### commit

首先掏出与我英语老师同款的Lingoes查单词。

commit v.  委托, 押往, 犯罪

这里的commit跟字典里的好像不一样，因为我又不犯罪！

其实GitHub的一个优点就是**可以方便地管理自己的记录**！

你做每一次修改，就会生成一个commit，你可以在每一个commit中添加注释。

如果你改错了，但是又没备份，没关系！点击我原来的那个commit，就可以直接改回来！

### branch

branch n. 分支，树枝

这里的意思也类似于“分支”的意思。具体是什么意思让我告诉你。

每一个repository都有一个默认的叫"master"的branch，意思就是主干。

在多人协作中，一般每个人都会有自己独立的branch，名字可以随便你起，比如我叫Garen就直接起名叫Garen。

在分支中修改不会涉及别人的分支和master分支。也就是每一个branch就是你自己的独立空间。

### pull request

你自己在自己的branch修改好了之后，向你的老板（不是我）说我的方案不错，结果也真的不错，老板打算把你修改的方案与原来的master合并。

这个时候如何操作？使用pull request操作。

先翻译一下：拉要求。

这个操作把你的要求（修改master）pull给老板看，这个时候老板会收到消息提醒，他可以决定是否把你的分支跟master合并（merge）。如果真，master的东西就会修改。你就要加工资了！！！

这里更改一下：所谓的老板应该是那个founder吧。

### contributor(s)

contribute v. 贡献

contribution n. 贡献

contributor n. 贡献人，也就是参与创建改repository的人们。

你们将会是我那个项目的contributors！

### clone

应该认识这个单词，意思是克隆。

对一个repository的clone，其实就是把这个仓库的所有东西都下载到本地。

可以用Git或者直接在浏览器上打包成.zip下载。

关于Git自己查资料去吧。。。

### fork

n. 叉

在我的认识下，这个操作可以看做“抄袭”，但是开源的世界没有抄袭这一说！

这个操作将别人的repository的所有内容变成自己一个所有的仓库。

我暂时还没用到，没东西可讲。

## issues

n.  发行, 后果, 问题

这里的意思应该是那个“问题”。这里的issues主要可以让别人open，让他们说发现bug了。然后叫这个项目的负责人修理。

主人修理好了之后就可以close掉这个issue。

## 一些认为有用的资料

1. [怎么使用GitHub？ -知乎][3]
2. [Git使用教程 -廖雪峰的官方网站][4]


  [1]: https://github.com
  [2]: https://www.luogu.org/wiki/show?name=%E5%B8%AE%E5%8A%A9%EF%BC%9Amarkdown
  [3]: https://www.zhihu.com/question/20070065
  [4]: https://www.liaoxuefeng.com/wiki/0013739516305929606dd18361248578c67b8067c8c017b000