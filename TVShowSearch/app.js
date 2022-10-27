
 const form = document.querySelector('#searchForm');
 form.addEventListener('submit',async function(evt){
     evt.preventDefault();
    const input =form.elements.query.value;
    const res=await axios.get(`http://api.tvmaze.com/search/shows?q=${input}`) ;
    makeImages(res.data);
    form.elements.query.value='';
 })
 const makeImages=(shows)=>{
     for(let sent of shows){
        if(sent.show.image){
        const img = document.createElement('img');
        img.src =sent.show.image.medium;
        document.body.append(img)}

     }
 }