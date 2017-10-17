#include "entry.hpp"
#include <algorithm>

Timepoint Entry::getDateLastUpdate()
{
	return dateLastUpdate_;
}

Category Entry::getCategory()
{
	return category_;
}

std::vector<Keyword> Entry::getKeywords()
{
	return keywords_;
}

std::vector<Path> Entry::getReferencePaths()
{
	return referencePaths_;
}

Text Entry::getEntryTitle()
{
	return entryTitle_;
}

Text Entry::getEntryText()
{
	return entryText_;
}

void Entry::setDateLastUpdate(Timepoint t)
{
	dateLastUpdate_=t;
}

void Entry::setCategory(Category c)
{
	category_ = c;
}

void Entry::setKeywords(std::vector<Keyword> k)
{
	keywords_=k;
}

void Entry::addKeyword(Keyword k)
{
	keywords_.push_back(k);
}

void Entry::removeKeyword(Keyword k)
{
	std::remove_if(keywords_.begin(),keywords_.end(),[&k](const Keyword& l)->bool{return k==l;});
}

void Entry::removeKeyword(unsigned i)
{
	if(i < keywords_.size())
		keywords_.erase(keywords_.begin()+i);
}

void Entry::setReferencePaths(std::vector<Path> p)
{
	referencePaths_=p;
}

void Entry::addReferencePath(Path p)
{
	referencePaths_.push_back(p);
}

void Entry::removeReferencePath(Path p)
{
	std::remove_if(referencePaths_.begin(), referencePaths_.end(), [&p](const Path& q)->bool{return p==q;});
}

void Entry::removeReferencePath(unsigned i)
{
	if(i < referencePaths_.size())
		referencePaths_.erase(referencePaths_.begin()+i);
}

void Entry::setEntryTitle(Text t)
{
	entryTitle_=t;
}

void Entry::setEntryText(Text t)
{
	entryTitle_=t;
}
